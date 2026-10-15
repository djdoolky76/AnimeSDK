#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHJBIMBILHP;
namespace System { class Object; }

#define EHJBIMBILHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0550)
#define EHJBIMBILHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A0590)
#define EHJBIMBILHP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E2A05A0)

inline static constexpr unsigned int EHJBIMBILHP___c_TypeDefinitionIndex = 26774;

	class EHJBIMBILHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHJBIMBILHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJBIMBILHP___C_CTOR_OFFSET))(this);
		}

		::EHJBIMBILHP* __cctor_b__18_0()
		{
			return ((::EHJBIMBILHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHJBIMBILHP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
