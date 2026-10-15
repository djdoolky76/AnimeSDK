#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGCGPFEOCBC;
namespace System { class Object; }

#define KGCGPFEOCBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E835A70)
#define KGCGPFEOCBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E835AB0)
#define KGCGPFEOCBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E835AC0)

inline static constexpr unsigned int KGCGPFEOCBC___c_TypeDefinitionIndex = 27648;

	class KGCGPFEOCBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGCGPFEOCBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGPFEOCBC___C_CTOR_OFFSET))(this);
		}

		::KGCGPFEOCBC* __cctor_b__23_0()
		{
			return ((::KGCGPFEOCBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGCGPFEOCBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
