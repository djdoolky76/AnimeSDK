#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCFDPFCHIIC;
namespace System { class Object; }

#define LCFDPFCHIIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2A3C0)
#define LCFDPFCHIIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2A400)
#define LCFDPFCHIIC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC2A410)

inline static constexpr unsigned int LCFDPFCHIIC___c_TypeDefinitionIndex = 26900;

	class LCFDPFCHIIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCFDPFCHIIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFDPFCHIIC___C_CTOR_OFFSET))(this);
		}

		::LCFDPFCHIIC* __cctor_b__28_0()
		{
			return ((::LCFDPFCHIIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCFDPFCHIIC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
