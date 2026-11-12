#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBEMDBEGDLA;
namespace System { class Object; }

#define DBEMDBEGDLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F432140)
#define DBEMDBEGDLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F432180)
#define DBEMDBEGDLA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F432190)

inline static constexpr unsigned int DBEMDBEGDLA___c_TypeDefinitionIndex = 31055;

	class DBEMDBEGDLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBEMDBEGDLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEMDBEGDLA___C_CTOR_OFFSET))(this);
		}

		::DBEMDBEGDLA* __cctor_b__28_0()
		{
			return ((::DBEMDBEGDLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBEMDBEGDLA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
