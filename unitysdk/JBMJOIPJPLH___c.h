#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBMJOIPJPLH;
namespace System { class Object; }

#define JBMJOIPJPLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA07C20)
#define JBMJOIPJPLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA07C50)
#define JBMJOIPJPLH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA07C60)

inline static constexpr unsigned int JBMJOIPJPLH___c_TypeDefinitionIndex = 29068;

	class JBMJOIPJPLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C1F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBMJOIPJPLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMJOIPJPLH___C_CTOR_OFFSET))(this);
		}

		::JBMJOIPJPLH* __cctor_b__33_0()
		{
			return ((::JBMJOIPJPLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMJOIPJPLH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
