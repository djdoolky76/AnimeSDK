#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNFPBAJNIEL;
namespace System { class Object; }

#define CNFPBAJNIEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DC050)
#define CNFPBAJNIEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DC090)
#define CNFPBAJNIEL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0DC0A0)

inline static constexpr unsigned int CNFPBAJNIEL___c_TypeDefinitionIndex = 34849;

	class CNFPBAJNIEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CF50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNFPBAJNIEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFPBAJNIEL___C_CTOR_OFFSET))(this);
		}

		::CNFPBAJNIEL* __cctor_b__28_0()
		{
			return ((::CNFPBAJNIEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNFPBAJNIEL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
