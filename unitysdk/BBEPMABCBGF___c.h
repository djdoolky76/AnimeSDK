#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBEPMABCBGF;
namespace System { class Object; }

#define BBEPMABCBGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C1630)
#define BBEPMABCBGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C1670)
#define BBEPMABCBGF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E7C1680)

inline static constexpr unsigned int BBEPMABCBGF___c_TypeDefinitionIndex = 31180;

	class BBEPMABCBGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x472E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBEPMABCBGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF___C_CTOR_OFFSET))(this);
		}

		::BBEPMABCBGF* __cctor_b__43_0()
		{
			return ((::BBEPMABCBGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBEPMABCBGF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
