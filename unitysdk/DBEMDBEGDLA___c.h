#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBEMDBEGDLA;
namespace System { class Object; }

#define DBEMDBEGDLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E158E90)
#define DBEMDBEGDLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E158ED0)
#define DBEMDBEGDLA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E158EE0)

inline static constexpr unsigned int DBEMDBEGDLA___c_TypeDefinitionIndex = 30157;

	class DBEMDBEGDLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x259C0);
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
