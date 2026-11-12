#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAHGFIIOPHL;
namespace System { class Object; }

#define MAHGFIIOPHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD02440)
#define MAHGFIIOPHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD02480)
#define MAHGFIIOPHL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FD02490)

inline static constexpr unsigned int MAHGFIIOPHL___c_TypeDefinitionIndex = 34431;

	class MAHGFIIOPHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAHGFIIOPHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAHGFIIOPHL___C_CTOR_OFFSET))(this);
		}

		::MAHGFIIOPHL* __cctor_b__48_0()
		{
			return ((::MAHGFIIOPHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAHGFIIOPHL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
