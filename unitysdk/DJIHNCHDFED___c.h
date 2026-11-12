#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJIHNCHDFED;
namespace System { class Object; }

#define DJIHNCHDFED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4A7110)
#define DJIHNCHDFED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4A7150)
#define DJIHNCHDFED___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4A7160)

inline static constexpr unsigned int DJIHNCHDFED___c_TypeDefinitionIndex = 35127;

	class DJIHNCHDFED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJIHNCHDFED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIHNCHDFED___C_CTOR_OFFSET))(this);
		}

		::DJIHNCHDFED* __cctor_b__23_0()
		{
			return ((::DJIHNCHDFED*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJIHNCHDFED___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
