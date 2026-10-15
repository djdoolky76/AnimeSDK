#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKBINHGJLGL;
namespace System { class Object; }

#define FKBINHGJLGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A96A0)
#define FKBINHGJLGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A96E0)
#define FKBINHGJLGL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E3A96F0)

inline static constexpr unsigned int FKBINHGJLGL___c_TypeDefinitionIndex = 32713;

	class FKBINHGJLGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKBINHGJLGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBINHGJLGL___C_CTOR_OFFSET))(this);
		}

		::FKBINHGJLGL* __cctor_b__23_0()
		{
			return ((::FKBINHGJLGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBINHGJLGL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
