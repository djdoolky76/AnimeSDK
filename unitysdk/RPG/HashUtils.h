#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::IO { class Stream; }

#define RPG_HASHUTILS_BUILDFILEMD5WITHEXTRAINFO_1_OFFSET UNITYSDK_OFFSET(0x1EF8DD60)
#define RPG_HASHUTILS_BUILDFILEMD5WITHEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1EF8DC70)
#define RPG_HASHUTILS_BUILDFILEMD5_OFFSET UNITYSDK_OFFSET(0x1EF8CBD0)
#define RPG_HASHUTILS_BUILDLOWERSTRINGHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EF8DF30)
#define RPG_HASHUTILS_BUILDSTREAMMD5_OFFSET UNITYSDK_OFFSET(0x1EF8D880)
#define RPG_HASHUTILS_BUILDSTRINGHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EF8DFF0)
#define RPG_HASHUTILS_BUILDSTRINGMD5WITHEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1EF8DBA0)
#define RPG_HASHUTILS_BUILDSTRINGMD5_OFFSET UNITYSDK_OFFSET(0x1EF8C770)
#define RPG_HASHUTILS_BUILDSTRINGMURMURHASH3_OFFSET UNITYSDK_OFFSET(0x1EF8DE40)
#define RPG_HASHUTILS_GETHASH_1_OFFSET UNITYSDK_OFFSET(0x1EF8E090)
#define RPG_HASHUTILS_GETHASH_2_OFFSET UNITYSDK_OFFSET(0x1EF8E0A0)
#define RPG_HASHUTILS_GETHASH_3_OFFSET UNITYSDK_OFFSET(0x1EF8E0B0)
#define RPG_HASHUTILS_GETHASH_4_OFFSET UNITYSDK_OFFSET(0x1EF8E0C0)
#define RPG_HASHUTILS_GETHASH_5_OFFSET UNITYSDK_OFFSET(0x1EF8E0D0)
#define RPG_HASHUTILS_GETHASH_6_OFFSET UNITYSDK_OFFSET(0x1EF8E0E0)
#define RPG_HASHUTILS_GETHASH_7_OFFSET UNITYSDK_OFFSET(0x1EF8E0F0)
#define RPG_HASHUTILS_GETHASH_OFFSET UNITYSDK_OFFSET(0x1EF8E080)
#define RPG_HASHUTILS_HASHCOMBINE_OFFSET UNITYSDK_OFFSET(0x1EF8E100)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_1_OFFSET UNITYSDK_OFFSET(0x1EF8E2D0)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_2_OFFSET UNITYSDK_OFFSET(0x1EF8E360)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_3_OFFSET UNITYSDK_OFFSET(0x1EF8E460)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_4_OFFSET UNITYSDK_OFFSET(0x1EF8E5C0)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_5_OFFSET UNITYSDK_OFFSET(0x1EF8E780)
#define RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_OFFSET UNITYSDK_OFFSET(0x1EF8E2C0)
#define RPG_HASHUTILS_HASHCONTINUECOMBINE_OFFSET UNITYSDK_OFFSET(0x1EF8E190)

namespace RPG
{
	inline static constexpr unsigned int HashUtils_TypeDefinitionIndex = 6379;

	class HashUtils : public ::System::Object
	{
	public:
		static ::System::String* BuildStringMd5(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDSTRINGMD5_OFFSET))(a1);
		}

		static ::System::String* BuildFileMd5(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDFILEMD5_OFFSET))(a1, a2, a3);
		}

		static ::System::String* BuildStreamMd5(::System::IO::Stream* a1)
		{
			return ((::System::String*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDSTREAMMD5_OFFSET))(a1);
		}

		static ::System::String* BuildStringMd5WithExtraInfo(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDSTRINGMD5WITHEXTRAINFO_OFFSET))(a1, a2);
		}

		static ::System::String* BuildFileMd5WithExtraInfo(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDFILEMD5WITHEXTRAINFO_OFFSET))(a1, a2);
		}

		static ::System::String* BuildFileMd5WithExtraInfo_1(::System::IO::Stream* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::IO::Stream*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDFILEMD5WITHEXTRAINFO_1_OFFSET))(a1, a2);
		}

		static ::System::UInt32 BuildStringMurmurHash3(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDSTRINGMURMURHASH3_OFFSET))(a1);
		}

		static ::System::Int32 BuildLowerStringHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDLOWERSTRINGHASHCODE_OFFSET))(a1);
		}

		static ::System::Int32 BuildStringHashCode(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_BUILDSTRINGHASHCODE_OFFSET))(a1);
		}

		static ::System::Boolean GetHash(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetHash_1(::System::Byte a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Byte, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetHash_2(::System::SByte a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::SByte, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetHash_3(::System::Char a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_3_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetHash_4(::System::Int16 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Int16, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetHash_5(::System::UInt16 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_5_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetHash_6(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_6_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetHash_7(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_GETHASH_7_OFFSET))(a1, a2);
		}

		static ::System::UInt32 HashCombine(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCOMBINE_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt32 HashContinueCombine(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINE_OFFSET))(a1, a2);
		}

		static ::System::Int32 HashContinueCombineWithInt(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_OFFSET))(a1, a2);
		}

		static ::System::Int32 HashContinueCombineWithInt_1(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 HashContinueCombineWithInt_2(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 HashContinueCombineWithInt_3(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 HashContinueCombineWithInt_4(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_4_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Int32 HashContinueCombineWithInt_5(::System::UInt32 a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Int32(*)(::System::UInt32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_HASHUTILS_HASHCONTINUECOMBINEWITHINT_5_OFFSET))(a1, a2);
		}

	};
}
