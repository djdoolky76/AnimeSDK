#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILIHCBAFEJH;
namespace System { class Object; }

#define ILIHCBAFEJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E682200)
#define ILIHCBAFEJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E682230)
#define ILIHCBAFEJH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E682240)

inline static constexpr unsigned int ILIHCBAFEJH___c_TypeDefinitionIndex = 26520;

	class ILIHCBAFEJH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILIHCBAFEJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIHCBAFEJH___C_CTOR_OFFSET))(this);
		}

		::ILIHCBAFEJH* __cctor_b__23_0()
		{
			return ((::ILIHCBAFEJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILIHCBAFEJH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
