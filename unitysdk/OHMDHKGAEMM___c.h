#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHMDHKGAEMM;
namespace System { class Object; }

#define OHMDHKGAEMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCE7B80)
#define OHMDHKGAEMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE7BC0)
#define OHMDHKGAEMM___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1FCE7BD0)

inline static constexpr unsigned int OHMDHKGAEMM___c_TypeDefinitionIndex = 29889;

	class OHMDHKGAEMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHMDHKGAEMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDHKGAEMM___C_CTOR_OFFSET))(this);
		}

		::OHMDHKGAEMM* __cctor_b__83_0()
		{
			return ((::OHMDHKGAEMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMDHKGAEMM___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
