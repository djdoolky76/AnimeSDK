#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Text/DecoderFallbackBuffer.h"
namespace System { class Object; }
namespace System::Text { class InternalDecoderBestFitFallback; }

#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AAE60)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET UNITYSDK_OFFSET(0x1D2AB2C0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1D2AB490)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET UNITYSDK_OFFSET(0x1D2AB240)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET UNITYSDK_OFFSET(0x1D2AB4B0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_INTERNALFALLBACK_OFFSET UNITYSDK_OFFSET(0x1D2AB4D0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0x1D2AB4C0)
#define SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET UNITYSDK_OFFSET(0x1D2AB310)

namespace System::Text
{
	inline static constexpr unsigned int InternalDecoderBestFitFallbackBuffer_TypeDefinitionIndex = 469;

	class InternalDecoderBestFitFallbackBuffer : public ::System::Text::DecoderFallbackBuffer
	{
	public:
		::System::Text::InternalDecoderBestFitFallback* oFallback; // 0x20
		::System::Char cBestFit; // 0x28
		::System::Byte _padding0[0x2];
		::System::Int32 iCount; // 0x2C
		::System::Int32 iSize; // 0x30
		static ::System::Object** StaticGet_s_InternalSyncObject()
		{
			return (::System::Object**)UnitySDK::FromName("System.Text", "InternalDecoderBestFitFallbackBuffer")->GetStaticField(0x25230);
		}

		::System::Void _ctor(::System::Text::InternalDecoderBestFitFallback* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::InternalDecoderBestFitFallback*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_CTOR_OFFSET))(this, a1);
		}

		static ::System::Object* get_InternalSyncObject()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_INTERNALSYNCOBJECT_OFFSET))();
		}

		::System::Boolean Fallback(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_FALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Char GetNextChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GETNEXTCHAR_OFFSET))(this);
		}

		::System::Int32 get_Remaining()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_GET_REMAINING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_RESET_OFFSET))(this);
		}

		::System::Int32 InternalFallback(::Il2CppArray<::System::Byte>* a1, ::PVOID a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_INTERNALFALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Char TryBestFit(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Char(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_INTERNALDECODERBESTFITFALLBACKBUFFER_TRYBESTFIT_OFFSET))(this, a1);
		}

	};
}
