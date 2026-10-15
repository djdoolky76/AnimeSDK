#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HANFHCOHGBP;
namespace System { class Object; }

#define HANFHCOHGBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DBE50)
#define HANFHCOHGBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DBE90)
#define HANFHCOHGBP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4DBEA0)

inline static constexpr unsigned int HANFHCOHGBP___c_TypeDefinitionIndex = 25908;

	class HANFHCOHGBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x250D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HANFHCOHGBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HANFHCOHGBP___C_CTOR_OFFSET))(this);
		}

		::HANFHCOHGBP* __cctor_b__28_0()
		{
			return ((::HANFHCOHGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HANFHCOHGBP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
