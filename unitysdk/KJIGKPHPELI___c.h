#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJIGKPHPELI;
namespace System { class Object; }

#define KJIGKPHPELI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E840690)
#define KJIGKPHPELI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8406D0)
#define KJIGKPHPELI___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E8406E0)

inline static constexpr unsigned int KJIGKPHPELI___c_TypeDefinitionIndex = 34569;

	class KJIGKPHPELI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJIGKPHPELI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI___C_CTOR_OFFSET))(this);
		}

		::KJIGKPHPELI* __cctor_b__33_0()
		{
			return ((::KJIGKPHPELI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJIGKPHPELI___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
