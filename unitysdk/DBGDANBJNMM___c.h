#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBGDANBJNMM;
namespace System { class Object; }

#define DBGDANBJNMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15B8A0)
#define DBGDANBJNMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15B8E0)
#define DBGDANBJNMM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E15B8F0)

inline static constexpr unsigned int DBGDANBJNMM___c_TypeDefinitionIndex = 31248;

	class DBGDANBJNMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25CB0);
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
