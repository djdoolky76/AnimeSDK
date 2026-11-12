#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBGDANBJNMM;
namespace System { class Object; }

#define DBGDANBJNMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F434B20)
#define DBGDANBJNMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F434B60)
#define DBGDANBJNMM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F434B70)

inline static constexpr unsigned int DBGDANBJNMM___c_TypeDefinitionIndex = 32161;

	class DBGDANBJNMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x202A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBGDANBJNMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM___C_CTOR_OFFSET))(this);
		}

		::DBGDANBJNMM* __cctor_b__33_0()
		{
			return ((::DBGDANBJNMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBGDANBJNMM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
