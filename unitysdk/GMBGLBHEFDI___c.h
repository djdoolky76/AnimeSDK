#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMBGLBHEFDI;
namespace System { class Object; }

#define GMBGLBHEFDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA47BC0)
#define GMBGLBHEFDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA47BF0)
#define GMBGLBHEFDI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FA47C00)

inline static constexpr unsigned int GMBGLBHEFDI___c_TypeDefinitionIndex = 35481;

	class GMBGLBHEFDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMBGLBHEFDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI___C_CTOR_OFFSET))(this);
		}

		::GMBGLBHEFDI* __cctor_b__28_0()
		{
			return ((::GMBGLBHEFDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBGLBHEFDI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
