#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBPEMINKHEN;
namespace System { class Object; }

#define LBPEMINKHEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8FCC90)
#define LBPEMINKHEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8FCCD0)
#define LBPEMINKHEN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8FCCE0)

inline static constexpr unsigned int LBPEMINKHEN___c_TypeDefinitionIndex = 28758;

	class LBPEMINKHEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LBPEMINKHEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN___C_CTOR_OFFSET))(this);
		}

		::LBPEMINKHEN* __cctor_b__28_0()
		{
			return ((::LBPEMINKHEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBPEMINKHEN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
