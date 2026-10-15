#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGHPIDMDOJM;
namespace System { class Object; }

#define DGHPIDMDOJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E180B40)
#define DGHPIDMDOJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E180B70)
#define DGHPIDMDOJM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E180B80)

inline static constexpr unsigned int DGHPIDMDOJM___c_TypeDefinitionIndex = 32321;

	class DGHPIDMDOJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGHPIDMDOJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM___C_CTOR_OFFSET))(this);
		}

		::DGHPIDMDOJM* __cctor_b__38_0()
		{
			return ((::DGHPIDMDOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
