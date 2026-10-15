#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOIFLHMPBIF;
namespace System { class Object; }

#define EOIFLHMPBIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CF140)
#define EOIFLHMPBIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CF170)
#define EOIFLHMPBIF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E2CF180)

inline static constexpr unsigned int EOIFLHMPBIF___c_TypeDefinitionIndex = 33410;

	class EOIFLHMPBIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOIFLHMPBIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF___C_CTOR_OFFSET))(this);
		}

		::EOIFLHMPBIF* __cctor_b__28_0()
		{
			return ((::EOIFLHMPBIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
