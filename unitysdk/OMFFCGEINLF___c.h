#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMFFCGEINLF;
namespace System { class Object; }

#define OMFFCGEINLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB3A60)
#define OMFFCGEINLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB3AA0)
#define OMFFCGEINLF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEB3AB0)

inline static constexpr unsigned int OMFFCGEINLF___c_TypeDefinitionIndex = 27141;

	class OMFFCGEINLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B130);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMFFCGEINLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFFCGEINLF___C_CTOR_OFFSET))(this);
		}

		::OMFFCGEINLF* __cctor_b__23_0()
		{
			return ((::OMFFCGEINLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFFCGEINLF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
