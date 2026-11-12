#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INGKACKDMMK;
namespace System { class Object; }

#define INGKACKDMMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9C9510)
#define INGKACKDMMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C9550)
#define INGKACKDMMK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F9C9560)

inline static constexpr unsigned int INGKACKDMMK___c_TypeDefinitionIndex = 30237;

	class INGKACKDMMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x552E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INGKACKDMMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKACKDMMK___C_CTOR_OFFSET))(this);
		}

		::INGKACKDMMK* __cctor_b__28_0()
		{
			return ((::INGKACKDMMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKACKDMMK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
