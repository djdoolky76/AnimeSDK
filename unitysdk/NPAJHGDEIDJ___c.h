#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPAJHGDEIDJ;
namespace System { class Object; }

#define NPAJHGDEIDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB76590)
#define NPAJHGDEIDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB765C0)
#define NPAJHGDEIDJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FB765D0)

inline static constexpr unsigned int NPAJHGDEIDJ___c_TypeDefinitionIndex = 34282;

	class NPAJHGDEIDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPAJHGDEIDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ___C_CTOR_OFFSET))(this);
		}

		::NPAJHGDEIDJ* __cctor_b__28_0()
		{
			return ((::NPAJHGDEIDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
