#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFALNHPPKAD;
namespace System { class Object; }

#define AFALNHPPKAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E4DD0)
#define AFALNHPPKAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E4E10)
#define AFALNHPPKAD___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1E0E4E20)

inline static constexpr unsigned int AFALNHPPKAD___c_TypeDefinitionIndex = 26899;

	class AFALNHPPKAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFALNHPPKAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFALNHPPKAD___C_CTOR_OFFSET))(this);
		}

		::AFALNHPPKAD* __cctor_b__73_0()
		{
			return ((::AFALNHPPKAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFALNHPPKAD___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
