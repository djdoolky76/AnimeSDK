#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMMHJIFCGNO;
namespace System { class Object; }

#define BMMHJIFCGNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02D140)
#define BMMHJIFCGNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02D180)
#define BMMHJIFCGNO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E02D190)

inline static constexpr unsigned int BMMHJIFCGNO___c_TypeDefinitionIndex = 32461;

	class BMMHJIFCGNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMMHJIFCGNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMHJIFCGNO___C_CTOR_OFFSET))(this);
		}

		::BMMHJIFCGNO* __cctor_b__28_0()
		{
			return ((::BMMHJIFCGNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMMHJIFCGNO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
