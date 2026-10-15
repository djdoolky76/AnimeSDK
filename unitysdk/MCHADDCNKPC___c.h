#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCHADDCNKPC;
namespace System { class Object; }

#define MCHADDCNKPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C8230)
#define MCHADDCNKPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C8270)
#define MCHADDCNKPC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9C8280)

inline static constexpr unsigned int MCHADDCNKPC___c_TypeDefinitionIndex = 34733;

	class MCHADDCNKPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCHADDCNKPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHADDCNKPC___C_CTOR_OFFSET))(this);
		}

		::MCHADDCNKPC* __cctor_b__23_0()
		{
			return ((::MCHADDCNKPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHADDCNKPC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
