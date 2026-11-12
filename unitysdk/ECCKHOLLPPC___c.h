#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECCKHOLLPPC;
namespace System { class Object; }

#define ECCKHOLLPPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F549F30)
#define ECCKHOLLPPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F549F70)
#define ECCKHOLLPPC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F549F80)

inline static constexpr unsigned int ECCKHOLLPPC___c_TypeDefinitionIndex = 25678;

	class ECCKHOLLPPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECCKHOLLPPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC___C_CTOR_OFFSET))(this);
		}

		::ECCKHOLLPPC* __cctor_b__38_0()
		{
			return ((::ECCKHOLLPPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECCKHOLLPPC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
