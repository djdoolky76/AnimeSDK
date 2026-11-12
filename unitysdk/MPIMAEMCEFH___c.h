#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MPIMAEMCEFH;
namespace System { class Object; }

#define MPIMAEMCEFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDF44B0)
#define MPIMAEMCEFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDF44F0)
#define MPIMAEMCEFH___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1FDF4500)

inline static constexpr unsigned int MPIMAEMCEFH___c_TypeDefinitionIndex = 29727;

	class MPIMAEMCEFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MPIMAEMCEFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIMAEMCEFH___C_CTOR_OFFSET))(this);
		}

		::MPIMAEMCEFH* __cctor_b__68_0()
		{
			return ((::MPIMAEMCEFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPIMAEMCEFH___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
