#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCNCHPKGHHN;
namespace System { class Object; }

#define DCNCHPKGHHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E177030)
#define DCNCHPKGHHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E177070)
#define DCNCHPKGHHN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E177080)

inline static constexpr unsigned int DCNCHPKGHHN___c_TypeDefinitionIndex = 26494;

	class DCNCHPKGHHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCNCHPKGHHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCHPKGHHN___C_CTOR_OFFSET))(this);
		}

		::DCNCHPKGHHN* __cctor_b__38_0()
		{
			return ((::DCNCHPKGHHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNCHPKGHHN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
