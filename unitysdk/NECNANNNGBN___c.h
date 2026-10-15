#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NECNANNNGBN;
namespace System { class Object; }

#define NECNANNNGBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2F70)
#define NECNANNNGBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2FB0)
#define NECNANNNGBN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAC2FC0)

inline static constexpr unsigned int NECNANNNGBN___c_TypeDefinitionIndex = 28599;

	class NECNANNNGBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x603E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NECNANNNGBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NECNANNNGBN___C_CTOR_OFFSET))(this);
		}

		::NECNANNNGBN* __cctor_b__28_0()
		{
			return ((::NECNANNNGBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NECNANNNGBN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
