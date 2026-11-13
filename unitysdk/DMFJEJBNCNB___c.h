#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMFJEJBNCNB;
namespace System { class Object; }

#define DMFJEJBNCNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201DB700)
#define DMFJEJBNCNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201DB740)
#define DMFJEJBNCNB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x201DB750)

inline static constexpr unsigned int DMFJEJBNCNB___c_TypeDefinitionIndex = 31027;

	class DMFJEJBNCNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33B80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMFJEJBNCNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFJEJBNCNB___C_CTOR_OFFSET))(this);
		}

		::DMFJEJBNCNB* __cctor_b__23_0()
		{
			return ((::DMFJEJBNCNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMFJEJBNCNB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
