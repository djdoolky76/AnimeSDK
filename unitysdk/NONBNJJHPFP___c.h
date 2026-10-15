#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NONBNJJHPFP;
namespace System { class Object; }

#define NONBNJJHPFP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB90840)
#define NONBNJJHPFP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB90870)
#define NONBNJJHPFP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB90880)

inline static constexpr unsigned int NONBNJJHPFP___c_TypeDefinitionIndex = 34169;

	class NONBNJJHPFP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NONBNJJHPFP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NONBNJJHPFP___C_CTOR_OFFSET))(this);
		}

		::NONBNJJHPFP* __cctor_b__28_0()
		{
			return ((::NONBNJJHPFP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NONBNJJHPFP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
