#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGPHMHCOPPO;
namespace System { class Object; }

#define DGPHMHCOPPO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206513B0)
#define DGPHMHCOPPO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206513F0)
#define DGPHMHCOPPO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20651400)

inline static constexpr unsigned int DGPHMHCOPPO___c_TypeDefinitionIndex = 34955;

	class DGPHMHCOPPO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGPHMHCOPPO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPHMHCOPPO___C_CTOR_OFFSET))(this);
		}

		::DGPHMHCOPPO* __cctor_b__23_0()
		{
			return ((::DGPHMHCOPPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPHMHCOPPO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
