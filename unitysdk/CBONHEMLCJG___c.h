#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBONHEMLCJG;
namespace System { class Object; }

#define CBONHEMLCJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0444F0)
#define CBONHEMLCJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E044530)
#define CBONHEMLCJG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E044540)

inline static constexpr unsigned int CBONHEMLCJG___c_TypeDefinitionIndex = 34438;

	class CBONHEMLCJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBONHEMLCJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG___C_CTOR_OFFSET))(this);
		}

		::CBONHEMLCJG* __cctor_b__23_0()
		{
			return ((::CBONHEMLCJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBONHEMLCJG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
