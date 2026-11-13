#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMDFLBJFIDM;
namespace System { class Object; }

#define OMDFLBJFIDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD700A0)
#define OMDFLBJFIDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD700E0)
#define OMDFLBJFIDM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD700F0)

inline static constexpr unsigned int OMDFLBJFIDM___c_TypeDefinitionIndex = 32157;

	class OMDFLBJFIDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMDFLBJFIDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFLBJFIDM___C_CTOR_OFFSET))(this);
		}

		::OMDFLBJFIDM* __cctor_b__28_0()
		{
			return ((::OMDFLBJFIDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMDFLBJFIDM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
