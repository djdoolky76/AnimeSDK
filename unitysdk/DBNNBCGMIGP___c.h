#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBNNBCGMIGP;
namespace System { class Object; }

#define DBNNBCGMIGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E135820)
#define DBNNBCGMIGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E135860)
#define DBNNBCGMIGP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E135870)

inline static constexpr unsigned int DBNNBCGMIGP___c_TypeDefinitionIndex = 25077;

	class DBNNBCGMIGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x233D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBNNBCGMIGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNNBCGMIGP___C_CTOR_OFFSET))(this);
		}

		::DBNNBCGMIGP* __cctor_b__28_0()
		{
			return ((::DBNNBCGMIGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNNBCGMIGP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
