#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNCFPNFGAOH;
namespace System { class Object; }

#define MNCFPNFGAOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA64920)
#define MNCFPNFGAOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA64960)
#define MNCFPNFGAOH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA64970)

inline static constexpr unsigned int MNCFPNFGAOH___c_TypeDefinitionIndex = 30816;

	class MNCFPNFGAOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNCFPNFGAOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH___C_CTOR_OFFSET))(this);
		}

		::MNCFPNFGAOH* __cctor_b__23_0()
		{
			return ((::MNCFPNFGAOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCFPNFGAOH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
