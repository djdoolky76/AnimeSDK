#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLMIDIGAMEL;
namespace System { class Object; }

#define NLMIDIGAMEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB68620)
#define NLMIDIGAMEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB68660)
#define NLMIDIGAMEL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB68670)

inline static constexpr unsigned int NLMIDIGAMEL___c_TypeDefinitionIndex = 27434;

	class NLMIDIGAMEL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLMIDIGAMEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMIDIGAMEL___C_CTOR_OFFSET))(this);
		}

		::NLMIDIGAMEL* __cctor_b__28_0()
		{
			return ((::NLMIDIGAMEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMIDIGAMEL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
