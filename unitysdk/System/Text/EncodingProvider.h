#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class DecoderFallback; }
namespace System::Text { class EncoderFallback; }
namespace System::Text { class Encoding; }
namespace System::Text { class EncodingProvider; }

#define SYSTEM_TEXT_ENCODINGPROVIDER_ADDPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C0EC3D0)
#define SYSTEM_TEXT_ENCODINGPROVIDER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0F4F40)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_1_OFFSET UNITYSDK_OFFSET(0x1C0EE990)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_2_OFFSET UNITYSDK_OFFSET(0x1C0EE5E0)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_3_OFFSET UNITYSDK_OFFSET(0x1C0EEBE0)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET UNITYSDK_OFFSET(0x1C0ED320)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_2_OFFSET UNITYSDK_OFFSET(0x1C0F4B20)
#define SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_3_OFFSET UNITYSDK_OFFSET(0x1C0F4D30)

namespace System::Text
{
	inline static constexpr unsigned int EncodingProvider_TypeDefinitionIndex = 496;

	class EncodingProvider : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Text::EncodingProvider*>** StaticGet_s_providers()
		{
			return (::Il2CppArray<::System::Text::EncodingProvider*>**)UnitySDK::FromName("System.Text", "EncodingProvider")->GetStaticField(0x23BC0);
		}

		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)UnitySDK::FromName("System.Text", "EncodingProvider")->GetStaticField(0x23BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_CCTOR_OFFSET))();
		}

		::System::Text::Encoding* GetEncoding_2(::System::String* a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Text::Encoding*(*)(::PVOID, ::System::String*, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Text::Encoding* GetEncoding_3(::System::Int32 a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Text::Encoding*(*)(::PVOID, ::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODING_3_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void AddProvider(::System::Text::EncodingProvider* a1)
		{
			return ((::System::Void(*)(::System::Text::EncodingProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_ADDPROVIDER_OFFSET))(a1);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider(::System::Int32 a1)
		{
			return ((::System::Text::Encoding*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_OFFSET))(a1);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider_1(::System::String* a1)
		{
			return ((::System::Text::Encoding*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_1_OFFSET))(a1);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider_2(::System::Int32 a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Text::Encoding*(*)(::System::Int32, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_2_OFFSET))(a1, a2, a3);
		}

		static ::System::Text::Encoding* GetEncodingFromProvider_3(::System::String* a1, ::System::Text::EncoderFallback* a2, ::System::Text::DecoderFallback* a3)
		{
			return ((::System::Text::Encoding*(*)(::System::String*, ::System::Text::EncoderFallback*, ::System::Text::DecoderFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_ENCODINGPROVIDER_GETENCODINGFROMPROVIDER_3_OFFSET))(a1, a2, a3);
		}

	};
}
