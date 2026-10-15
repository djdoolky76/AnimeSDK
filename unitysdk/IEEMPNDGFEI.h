#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class String; }

#define IEEMPNDGFEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB08230)

inline static constexpr unsigned int IEEMPNDGFEI_TypeDefinitionIndex = 42783;

	class IEEMPNDGFEI : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
		{
			return (::Il2CppArray<::System::RuntimeTypeHandle>**)UnitySDK::FromName("", "IEEMPNDGFEI")->GetStaticField(0x26410);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "IEEMPNDGFEI")->GetStaticField(0x26418);
		}

		// static const ::System::Object BDBKJFDLDGO; // 0x0
		// static const ::System::Object FGKICLOBPHI; // 0x0
		// static const ::System::Object IBHHKOBHDMP; // 0x0
		// static const ::System::Object GIKNCJMJLFE; // 0x0
		// static const ::System::Object GPDDGLCFBLL; // 0x0
		// static const ::System::Object INLPPOKBADH; // 0x0
		// static const ::System::Object OOHGEOIAAIK; // 0x0
		// static const ::System::Object NEHFKCBKCJH; // 0x0
		// static const ::System::Object JFKAPAALOBI; // 0x0
		// static const ::System::Object NDILIPJLJGO; // 0x0
		// static const ::System::Object NHIFBDOLJND; // 0x0
		// static const ::System::Object BMDGOBBDEMM; // 0x0
		// static const ::System::Object NIOJMANDKML; // 0x0
		// static const ::System::Object AAFFJOLPJLP; // 0x0
		// static const ::System::Object OINDPPOAHKE; // 0x0
		// static const ::System::Object OLCBCHDCOFB; // 0x0
		// static const ::System::Object BIKKGDDMNNF; // 0x0
		// static const ::System::Object DHFEBPAFDIF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEEMPNDGFEI_CCTOR_OFFSET))();
		}

	};
