#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::OneD { class UPCEANExtension2Support; }
namespace ZXing::OneD { class UPCEANExtension5Support; }

#define ZXING_ONED_UPCEANEXTENSIONSUPPORT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C322130)
#define ZXING_ONED_UPCEANEXTENSIONSUPPORT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C321F90)

namespace ZXing::OneD
{
	inline static constexpr unsigned int UPCEANExtensionSupport_TypeDefinitionIndex = 18682;

	class UPCEANExtensionSupport : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_EXTENSION_START_PATTERN()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UPCEANExtensionSupport_TypeDefinitionIndex)->GetStaticField(0x8DE0);
		}
		::ZXing::OneD::UPCEANExtension5Support* fiveSupport; // 0x10
		::ZXing::OneD::UPCEANExtension2Support* twoSupport; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANEXTENSIONSUPPORT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_ONED_UPCEANEXTENSIONSUPPORT__CCTOR_OFFSET))();
		}
	};
}
