#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIAICDLAHO;
class FLFPABDLADB;
class LBJLBMOOJGM;
namespace System { class Object; }

#define FLFPABDLADB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC6B840)
#define FLFPABDLADB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC6B3F0)
#define FLFPABDLADB_KEBEIGGJIPA_OFFSET UNITYSDK_OFFSET(0x1EC6B400)

	class FLFPABDLADB : public ::System::Object
	{
	public:
		static ::FLFPABDLADB** StaticGet_FMJPMFEDIJL()
		{
			return (::FLFPABDLADB**)UnitySDK::FromName("", "FLFPABDLADB")->GetStaticField(0x4AF50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLFPABDLADB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLFPABDLADB_CCTOR_OFFSET))();
		}

		::System::Object* KEBEIGGJIPA(::ECIAICDLAHO* a1, ::LBJLBMOOJGM* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::ECIAICDLAHO*, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + FLFPABDLADB_KEBEIGGJIPA_OFFSET))(this, a1, a2);
		}

	};
