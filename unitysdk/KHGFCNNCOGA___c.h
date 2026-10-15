#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHGFCNNCOGA;
namespace System { class Object; }

#define KHGFCNNCOGA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8445B0)
#define KHGFCNNCOGA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8445F0)
#define KHGFCNNCOGA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E844600)

inline static constexpr unsigned int KHGFCNNCOGA___c_TypeDefinitionIndex = 27181;

	class KHGFCNNCOGA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x174C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHGFCNNCOGA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFCNNCOGA___C_CTOR_OFFSET))(this);
		}

		::KHGFCNNCOGA* __cctor_b__28_0()
		{
			return ((::KHGFCNNCOGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHGFCNNCOGA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
