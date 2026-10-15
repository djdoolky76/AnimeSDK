#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHAAGBGAHLO;
namespace System { class Object; }

#define FHAAGBGAHLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E384E70)
#define FHAAGBGAHLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E384EB0)
#define FHAAGBGAHLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E384EC0)

inline static constexpr unsigned int FHAAGBGAHLO___c_TypeDefinitionIndex = 33347;

	class FHAAGBGAHLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EE00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHAAGBGAHLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAAGBGAHLO___C_CTOR_OFFSET))(this);
		}

		::FHAAGBGAHLO* __cctor_b__23_0()
		{
			return ((::FHAAGBGAHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAAGBGAHLO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
