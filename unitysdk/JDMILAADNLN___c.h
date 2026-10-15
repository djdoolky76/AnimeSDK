#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDMILAADNLN;
namespace System { class Object; }

#define JDMILAADNLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E70EC80)
#define JDMILAADNLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70ECC0)
#define JDMILAADNLN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E70ECD0)

inline static constexpr unsigned int JDMILAADNLN___c_TypeDefinitionIndex = 33835;

	class JDMILAADNLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDMILAADNLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMILAADNLN___C_CTOR_OFFSET))(this);
		}

		::JDMILAADNLN* __cctor_b__18_0()
		{
			return ((::JDMILAADNLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDMILAADNLN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
