#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILCNCFMDLP;
namespace System { class Object; }

#define EILCNCFMDLP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2AB660)
#define EILCNCFMDLP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2AB6A0)
#define EILCNCFMDLP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2AB6B0)

inline static constexpr unsigned int EILCNCFMDLP___c_TypeDefinitionIndex = 33691;

	class EILCNCFMDLP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EILCNCFMDLP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EILCNCFMDLP___C_CTOR_OFFSET))(this);
		}

		::EILCNCFMDLP* __cctor_b__28_0()
		{
			return ((::EILCNCFMDLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EILCNCFMDLP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
