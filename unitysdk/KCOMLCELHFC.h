#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ArraySegment_1.h"
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define KCOMLCELHFC_GKLHDPJEACE_OFFSET UNITYSDK_OFFSET(0x1DD3BE00)
#define KCOMLCELHFC_LKMLEIKIHDB_OFFSET UNITYSDK_OFFSET(0x1DD3BD30)
#define KCOMLCELHFC_MGLIBLKOGLE_OFFSET UNITYSDK_OFFSET(0x1DD3BA70)
#define KCOMLCELHFC_PAKFEFGCHFM_1_OFFSET UNITYSDK_OFFSET(0x1DD3ADF0)
#define KCOMLCELHFC_PAKFEFGCHFM_2_OFFSET UNITYSDK_OFFSET(0x1DD3AE30)
#define KCOMLCELHFC_PAKFEFGCHFM_3_OFFSET UNITYSDK_OFFSET(0x1DD3AE70)
#define KCOMLCELHFC_PAKFEFGCHFM_4_OFFSET UNITYSDK_OFFSET(0x1DD3B750)
#define KCOMLCELHFC_PAKFEFGCHFM_5_OFFSET UNITYSDK_OFFSET(0x1DD3B770)
#define KCOMLCELHFC_PAKFEFGCHFM_OFFSET UNITYSDK_OFFSET(0x1DD3AB00)

inline static constexpr unsigned int KCOMLCELHFC_TypeDefinitionIndex = 6413;

	class KCOMLCELHFC : public ::System::Object
	{
	public:
		// static const ::System::Object GLBHMMODODO; // 0x0
		// static const ::System::Object KCMAIIILAIK; // 0x0
		// static const ::System::Object EOFEHGDBNMH; // 0x0
		// static const ::System::Object OGDCLBEFHHC; // 0x0
		// static const ::System::Object GPCICDAGBMK; // 0x0
		static ::System::UInt64 PAKFEFGCHFM(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + KCOMLCELHFC_PAKFEFGCHFM_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt64 PAKFEFGCHFM_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::UInt64 a4)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + KCOMLCELHFC_PAKFEFGCHFM_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::UInt64 PAKFEFGCHFM_2(::System::ArraySegment_1<::System::Byte> a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::System::ArraySegment_1<::System::Byte>, ::System::UInt64))((::PBYTE)hIl2Cpp + KCOMLCELHFC_PAKFEFGCHFM_2_OFFSET))(a1, a2);
		}

		static ::System::UInt64 PAKFEFGCHFM_3(::System::IO::Stream* a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::UInt64(*)(::System::IO::Stream*, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + KCOMLCELHFC_PAKFEFGCHFM_3_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt64 PAKFEFGCHFM_4(::System::String* a1)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + KCOMLCELHFC_PAKFEFGCHFM_4_OFFSET))(a1);
		}

		static ::System::UInt64 PAKFEFGCHFM_5(::System::String* a1, ::System::Text::Encoding* a2, ::System::UInt64 a3)
		{
			return ((::System::UInt64(*)(::System::String*, ::System::Text::Encoding*, ::System::UInt64))((::PBYTE)hIl2Cpp + KCOMLCELHFC_PAKFEFGCHFM_5_OFFSET))(a1, a2, a3);
		}

		static ::System::UInt64 MGLIBLKOGLE(::PVOID a1, ::System::Int32 a2, ::System::UInt64 a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + KCOMLCELHFC_MGLIBLKOGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LKMLEIKIHDB(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::System::UInt64 a5, ::System::UInt64 a6)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + KCOMLCELHFC_LKMLEIKIHDB_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::UInt64 GKLHDPJEACE(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::UInt64 a3, ::System::UInt64 a4, ::System::UInt64 a5, ::System::UInt64 a6, ::System::Int64 a7, ::System::UInt64 a8)
		{
			return ((::System::UInt64(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::UInt64, ::System::Int64, ::System::UInt64))((::PBYTE)hIl2Cpp + KCOMLCELHFC_GKLHDPJEACE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

	};
