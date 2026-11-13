#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFMAAAJFLOA;
namespace System { class Object; }

#define PFMAAAJFLOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2067C490)
#define PFMAAAJFLOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2067C4D0)
#define PFMAAAJFLOA___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x2067C4E0)

inline static constexpr unsigned int PFMAAAJFLOA___c_TypeDefinitionIndex = 29183;

	class PFMAAAJFLOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x368A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFMAAAJFLOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMAAAJFLOA___C_CTOR_OFFSET))(this);
		}

		::PFMAAAJFLOA* __cctor_b__42_0()
		{
			return ((::PFMAAAJFLOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMAAAJFLOA___C___CCTOR_B__42_0_OFFSET))(this);
		}

	};
