#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGIJMPCIJOG;
namespace System { class Object; }

#define EGIJMPCIJOG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E267380)
#define EGIJMPCIJOG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2673C0)
#define EGIJMPCIJOG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2673D0)

inline static constexpr unsigned int EGIJMPCIJOG___c_TypeDefinitionIndex = 34652;

	class EGIJMPCIJOG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGIJMPCIJOG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIJMPCIJOG___C_CTOR_OFFSET))(this);
		}

		::EGIJMPCIJOG* __cctor_b__23_0()
		{
			return ((::EGIJMPCIJOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGIJMPCIJOG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
