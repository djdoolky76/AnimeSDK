#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEFEDOAOKNO;
namespace System { class Object; }

#define GEFEDOAOKNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4299F0)
#define GEFEDOAOKNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E429A30)
#define GEFEDOAOKNO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E429A40)

inline static constexpr unsigned int GEFEDOAOKNO___c_TypeDefinitionIndex = 29828;

	class GEFEDOAOKNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x119F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEFEDOAOKNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFEDOAOKNO___C_CTOR_OFFSET))(this);
		}

		::GEFEDOAOKNO* __cctor_b__23_0()
		{
			return ((::GEFEDOAOKNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFEDOAOKNO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
