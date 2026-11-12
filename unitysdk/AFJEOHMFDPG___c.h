#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFJEOHMFDPG;
namespace System { class Object; }

#define AFJEOHMFDPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3D3900)
#define AFJEOHMFDPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3D3930)
#define AFJEOHMFDPG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F3D3940)

inline static constexpr unsigned int AFJEOHMFDPG___c_TypeDefinitionIndex = 28393;

	class AFJEOHMFDPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AE00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFJEOHMFDPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJEOHMFDPG___C_CTOR_OFFSET))(this);
		}

		::AFJEOHMFDPG* __cctor_b__38_0()
		{
			return ((::AFJEOHMFDPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJEOHMFDPG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
