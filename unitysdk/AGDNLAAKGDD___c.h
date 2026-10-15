#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGDNLAAKGDD;
namespace System { class Object; }

#define AGDNLAAKGDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E129140)
#define AGDNLAAKGDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E129170)
#define AGDNLAAKGDD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E129180)

	class AGDNLAAKGDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGDNLAAKGDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDNLAAKGDD___C_CTOR_OFFSET))(this);
		}

		::AGDNLAAKGDD* __cctor_b__33_0()
		{
			return ((::AGDNLAAKGDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDNLAAKGDD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
