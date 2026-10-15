#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNOJGAGPFBG;
namespace System { class Object; }

#define HNOJGAGPFBG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3CF0)
#define HNOJGAGPFBG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3D20)
#define HNOJGAGPFBG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5E3D30)

inline static constexpr unsigned int HNOJGAGPFBG___c_TypeDefinitionIndex = 28653;

	class HNOJGAGPFBG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNOJGAGPFBG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG___C_CTOR_OFFSET))(this);
		}

		::HNOJGAGPFBG* __cctor_b__43_0()
		{
			return ((::HNOJGAGPFBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNOJGAGPFBG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
