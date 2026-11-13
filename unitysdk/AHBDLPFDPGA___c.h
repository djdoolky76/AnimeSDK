#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHBDLPFDPGA;
namespace System { class Object; }

#define AHBDLPFDPGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204F8AB0)
#define AHBDLPFDPGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204F8AF0)
#define AHBDLPFDPGA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x204F8B00)

inline static constexpr unsigned int AHBDLPFDPGA___c_TypeDefinitionIndex = 28134;

	class AHBDLPFDPGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHBDLPFDPGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBDLPFDPGA___C_CTOR_OFFSET))(this);
		}

		::AHBDLPFDPGA* __cctor_b__18_0()
		{
			return ((::AHBDLPFDPGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHBDLPFDPGA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
