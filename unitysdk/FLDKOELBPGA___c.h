#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLDKOELBPGA;
namespace System { class Object; }

#define FLDKOELBPGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE3CF60)
#define FLDKOELBPGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE3CFA0)
#define FLDKOELBPGA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FE3CFB0)

inline static constexpr unsigned int FLDKOELBPGA___c_TypeDefinitionIndex = 28489;

	class FLDKOELBPGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLDKOELBPGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDKOELBPGA___C_CTOR_OFFSET))(this);
		}

		::FLDKOELBPGA* __cctor_b__38_0()
		{
			return ((::FLDKOELBPGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLDKOELBPGA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
