#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKFIKEAJFP;
namespace System { class Object; }

#define KIKFIKEAJFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8348D0)
#define KIKFIKEAJFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E834910)
#define KIKFIKEAJFP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E834920)

inline static constexpr unsigned int KIKFIKEAJFP___c_TypeDefinitionIndex = 32053;

	class KIKFIKEAJFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x194A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKFIKEAJFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP___C_CTOR_OFFSET))(this);
		}

		::KIKFIKEAJFP* __cctor_b__28_0()
		{
			return ((::KIKFIKEAJFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKFIKEAJFP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
